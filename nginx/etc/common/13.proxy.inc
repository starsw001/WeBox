##
# Proxy Config
##

proxy_buffering on;
proxy_buffers 8 64k;
proxy_buffer_size 64k;
proxy_busy_buffers_size 128k;

proxy_connect_timeout 15;
proxy_read_timeout 90;
proxy_send_timeout 90;

proxy_cache_path /srv/nginx/var/tmp/proxy_cache levels=1:2 keys_zone=proxy_cache:250m max_size=500m inactive=1d;

##
# header
##

proxy_set_header Host $host;
proxy_set_header X-Forwarded-For $http_x_forwarded_for;
