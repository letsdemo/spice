
# virt-manager
服务器端安装

# virt-viewer
* [下载地址](https://releases.pagure.org/virt-viewer/virt-viewer-x64-11.0-1.0.msi)
  
# spicehtml5
## [Spice-HTML5仓库](https://gitlab.freedesktop.org/spice/spice-html5)
* 下载源码
* 使用webserver部署, README里说可以直接访问，其实不行，会有跨域访问问题
## [WebSocket代理: websockify](https://github.com/novnc/websockify)
* websockify部署
  * 编译镜像: `cd docker && ./build.sh`
  * 修改 `docker-compose.yml` 中 `command` 中spice服务器的地址
  * 部署 `docker compose up -d`
  
## 调用流程
```mermaid
sequenceDiagram
    participant SpiceHTML5
    participant WebSocketProxy
    participant SpiceServer

    SpiceHTML5->>WebSocketProxy: 建立WebSocket连接
    WebSocketProxy->>SpiceServer: 转发WebSocket连接
    SpiceServer-->>WebSocketProxy: 发送初始化数据
    WebSocketProxy-->>SpiceHTML5: 接收并显示初始化数据
    loop 数据传输
        SpiceHTML5->>WebSocketProxy: 发送控制指令
        WebSocketProxy->>SpiceServer: 转发控制指令
        SpiceServer-->>WebSocketProxy: 返回处理结果
        WebSocketProxy-->>SpiceHTML5: 显示处理结果
    end
    SpiceHTML5->>WebSocketProxy: 关闭连接
    WebSocketProxy->>SpiceServer: 通知关闭连接
```
* 浏览器安全限制
  * 不能使用剪贴板