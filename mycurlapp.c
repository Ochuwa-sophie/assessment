#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
    CURL *curl;
    CURLcode res;
    struct Curl_slist *header = NULL;
    
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
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &internal_struct);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, binaryptr);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, 23L);
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        curl_easy_perform(curl); /* post away! */
        curl_slist_free_all(headers); /* free the header list */
 struct curl_slist *headers=NULL; /* init to NULL is important */

        header = curl_slist_append(header, "Content-Type: application/x-www-form-urlencoded");   
        header = curl_slist_append(header, "x-source-code: test");
        header = curl_slist_append(header, "x-client-id: test");

 CURLcode curl_easy_setopt(CURL *handle, CURLOPT_VERBOSE, long onoff);
 CURLcode curl_easy_setopt(CURL *handle, CURLOPT_USERPWD, char *userpwd);
  struct curl_slist *headers=NULL;
 headers = curl_slist_append(headers, "Content-Type: text/xml"); 
 headers = curl_slist_append(headers, "Hey-server-hey: how are you?");
 headers = curl_slist_append(headers, "X-silly-content: yes");
 
 /* pass our list of custom made headers */
 curl_easy_perform(easyhandle); /* transfer http */
 
 curl_slist_free_all(headers); /* free the header list */
  headers = curl_slist_append(headers, "Accept: Agent-007");
 headers = curl_slist_append(headers, "Host: munged.host.line");

CURL *curl = curl_easy_init();
if(curl) {CURL *curl = curl_easy_init();
if(curl) {
  curl_easy_setopt(curl, CURLOPT_URL, "https://example.com/foo.bin");
 
  curl_easy_setopt(curl, CURLOPT_USERNAME, "clark");
 
  ret = curl_easy_perform(curl);
 
  curl_easy_cleanup(curl);
}


  curl_easy_setopt(curl, CURLOPT_URL, "https://example.com/foo.bin");
 
  curl_easy_setopt(curl, CURLOPT_USERPWD, "clark:kent");
 
  ret = curl_easy_perform(curl);
 
  curl_easy_cleanup(curl);
}
CURL *curl = curl_easy_init();
if(curl) {
  curl_easy_setopt(curl, CURLOPT_URL, "https://example.com/foo.bin");
 
  curl_easy_setopt(curl, CURLOPT_USERNAME, "clark");
 
  ret = curl_easy_perform(curl);
 
  curl_easy_cleanup(curl);
}



        /* Perform the request, res will get the return code */       
        res = curl_easy_perform(curl);
        curl_slist_free_all(header);       
       res = curl_easy_perform(curl);
    success = curl_easy_perform(easyhandle);


   
   if(res != CURLE_OK)
    fprintf(stderr, "curl_easy_perform() returned %s\n",
            curl_easy_strerror(res ));
            

        curl_easy_cleanup(curl);
   }

   
   curl_global_cleanup();
    return 0;
}

