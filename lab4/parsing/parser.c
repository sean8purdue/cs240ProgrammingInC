#include <stdio.h>
#include <stdlib.h> // exit
#include <string.h> // strlen

#ifdef __APPLE__
#define SYS 1

#elif __unix__
#define SYS 3

#elif __linux__
#define SYS 5

#else
#define SYS 2

#endif


#define MAXSIZE 300

void extract(char *);
void error(const char *msg) { perror(msg); exit(2); };

int main() {

    /*printf("%d\n", SYS);*/
    // on mac: print 1
    // on CS Data: print 3

    char url[MAXSIZE];

    // get the url
    int i = 0;
    char c;
    while ( (c = getchar()) != '\n' ) {
        if (i < (MAXSIZE - 1) ) {
            //Upper to lower
            if ( (c >= 65) && (c <= 90) ) { c = c + 32; }
            url[i++] = c;
        } else {
            printf("url should less than %d\n", MAXSIZE);
            return 1;
        }
    }
    url[i] = '\0';
    /*printf("%s\n", url);*/

    // extract the domain name or IP address
    extract(url);

}

void extract(char *url) {
    char domain[MAXSIZE];
    const char *msg = "Header Format Wrong!";

    // catch NULL pointer
    if (url == NULL) { error("url is NULL"); }
    /*printf("in extract: %s\n", url);*/

    int i = 0;
    char head[] = "http://";
    /*printf("%s\n", head);*/
    // check ill format header
    while ( head[i] != '\0' ) {
        if (url[i] != head[i])
            error(msg);
        i++;
    }

    // copy domain name from url to domain
    // except the characters afeter ':'
    unsigned int len = strlen(head);
    /*printf("%d\n", i);*/
    while ( url[i] != '/' ) {
        // skip port nubmers after ':' in domain name
        if (url[i] == ':') {
            while ( url[i++] != '/' ) {} 
            break;
        }
        domain[i-len] = url[i];
        i++;
    }
    domain[i-len] = '\0';
    printf("%s\n", domain);

    // check subfix type: must be ".gov" or ".org"
    int nDot = 0; // number of dot in domain name
    int j = 0;
    char subfix[MAXSIZE];
    i = 0;
    while ( domain[i] != '\0' ) {
        if (domain[i] == '.') {
            nDot++;
        }
        
        if ( nDot == 3 ) {
            subfix[j] = domain[i];
            j++;
        }

        i++;
    }
    subfix[j] = '\0';
    printf("%s\n", subfix);

    const char *gov = ".gov";
    const char *org = ".org";

    // cann't handle subfix with port number, such as ".org:901"
    /*i = 0;*/
    /*while (subfix[i] != '\0') {*/
        /*if ( subfix[i] == gov[i] || subfix[i] == org[i] ) {*/
            /*i++;*/
            /*continue;*/
        /*}*/
        /*error("subfix should be .org or gov");*/
    /*}*/

    // new version
    for (i = 0; i < 4; i++) {
        if ( subfix[i] == gov[i] || subfix[i] == org[i] ) {
            continue;
        }
        error("subfix should be .org or gov");
    }
}
