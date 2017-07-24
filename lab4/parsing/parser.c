#include <stdio.h>
#include <stdlib.h> // exit
#include <string.h> // strlen

#ifdef __linux__
    #include <sys/socket.h> /* socket, connect */
    #include <netdb.h> /* struct hostent, gethostbyname */
    #include <netinet/in.h> /* struct sockaddr_in, struct sockaddr */
#elif _WIN32
    #include <winsock2.h>
    #include <ws2tcpip.h>
    #include <windows.h>
    #pragma comment(lib,"ws2_32.lib") //Winsock Library

#else

#endif

#define MAXSIZE 300

void extract(char *);
void error(const char *msg) { perror(msg); exit(2); };

int main() {
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
    char *msg = "Header Format Wrong!";

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

    printf("%u\n", (unsigned)strlen(head));

}
