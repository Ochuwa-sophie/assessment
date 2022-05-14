#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
    CURL *curl;
    CURLcode res;
    struct Curl_slist *header = NULL;
    
    curl_easy_perform(curl); /* post away! */
    // curl_slist_free_all(header); /* free the header list */
    curl_global_init(CURL_GLOBAL_ALL);
      size_t write_data(void *buffer, size_t size, size_t nmemb, void *userp);

   curl = curl_easy_init();
   if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://accelerexportal.app:8084/anp/api/v3/linuxpostest/login");
        curl_easy_setopt(curl, CURLOPT_POST, 1L);
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);   
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, header);   
        curl_easy_setopt(curl, CURLOPT_USERPWD, "test");       
        curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
        // curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        // curl_easy_setopt(curl, CURLOPT_WRITEDATA, &internal_struct);
        // curl_easy_setopt(curl, CURLOPT_POSTFIELDS, binaryptr);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, 23L);
        curl_easy_setopt(curl, CURLOPT_USERNAME, "test");

        // header = curl_slist_append(header, "Content-Type: application/x-www-form-urlencoded");   
        // header = curl_slist_append(header, "x-source-code: test");
        // header = curl_slist_append(header, "x-client-id: test");

    // CURLcode curl_easy_setopt(CURL *handle, CURLOPT_VERBOSE, long onoff);
    // CURLcode curl_easy_setopt(CURL *handle, CURLOPT_USERPWD, char *userpwd);

   
   if(res != CURLE_OK)
    fprintf(stderr, "curl_easy_perform() returned %s\n",
            curl_easy_strerror(res ));
            

        curl_easy_cleanup(curl);
   }

   
   curl_global_cleanup();
    return 0;
}

