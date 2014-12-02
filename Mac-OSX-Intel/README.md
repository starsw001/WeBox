Webox-Mac
============

Nginx MySQL PHP Server For Mac / MNMP

此包为 Mac 下的 Web 开发环境（MNMP），基于 Mac OS X 10.9.4 + xCode 5.1.1 编译而成，所有依赖库均已编译至 /srv/library。下载后只需解压到 /srv 目录即可使用。

### A. 模块版本

    Nginx/1.6.1                 http://www.nginx.org/en/download.html
    MySQL/5.6.20                http://www.mysql.com/downloads/mysql
    PHP/5.4.32                  http://www.php.net/downloads.php
    PHP-Redis/2.2.5             http://pecl.php.net/package/redis


### B. 安装套件

    curl -O https://codeload.github.com/anrip/webox-mac/zip/master
    unzip master && sudo bash webox-mac-master/update
    rm -rf master*

### C.启动服务

    sudo /srv/service start
