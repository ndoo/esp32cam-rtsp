//*******************************************************************************
// HTML import
// Machine generated file
// ******************************************************************************


constexpr char file_data_index_html[] = "<!DOCTYPE html><html lang=en><head><meta charset=utf-8><meta name=viewport content=\"width=device-width, initial-scale=1, shrink-to-fit=no\"><link rel=stylesheet href=bootstrap.min.css><title>{{AppTitle}} v{{AppVersion}}</title></head><body><div class=container><h1 class=text-center>{{ThingName}}</h1><hr> {{#ConfigChanged}} <div class=\"alert alert-danger\" role=alert><p>The configuration has been changed.</p><p>It is recommended to restart the device.</p><button type=button class=\"btn btn-danger\" onclick=\"location.href='restart'\">Restart</button></div> {{/ConfigChanged}} <div class=row><div class=col-sm-6><div class=\"card bg-light mb-3\"><h5 class=card-header>ESP32</h5><div class=card-body><div class=row><div class=col-4>CPU model:</div><div class=col-8>{{ChipModel}} rev. {{ChipRevision}}</div></div><div class=row><div class=col-4>CPU speed:</div><div class=col-8>{{CpuFreqMHz}} Mhz</div></div><div class=row><div class=col-4>CPU cores:</div><div class=col-8>{{CpuCores}}</div></div><div class=row><div class=col-4>RAM size:</div><div class=col-8>{{HeapSize}}</div></div><div class=row><div class=col-4>PSRAM size:</div><div class=col-8>{{PsRamSize}}</div></div><div class=row><div class=col-4>Flash size:</div><div class=col-8>{{FlashSize}}</div></div></div></div></div><div class=col-sm-6><div class=\"card bg-light mb-3\"><h5 class=card-header>Diagnostics</h5><div class=card-body><div class=row><div class=col-4>Uptime:</div><div class=col-8>{{Uptime}}</div></div><div class=row><div class=col-4>RTSP sessions:</div><div class=col-8>{{NumRTSPSessions}}</div></div><div class=row><div class=col-4>Free heap:</div><div class=col-8>{{FreeHeap}}</div></div><div class=row><div class=col-4>Max free block:</div><div class=col-8>{{MaxAllocHeap}}</div></div></div></div></div></div><div class=row><div class=col-sm-6><div class=\"card bg-light mb-3\"><h5 class=card-header>Network</h5><div class=card-body><div class=row><div class=col-4>Host name:</div><div class=col-8>{{HostName}}</div></div><div class=row><div class=col-4>Mac address:</div><div class=col-8>{{MacAddress}}</div></div><div class=row><div class=col-4>Wifi mode:</div><div class=col-8>{{WifiMode}}</div></div><div class=row><div class=col-4>Access point:</div><div class=col-8>{{AccessPoint}}</div></div><div class=row><div class=col-4>Signal strength:</div><div class=col-8>{{SignalStrength}} dbm</div></div><div class=row><div class=col-4>IPv4 address:</div><div class=col-8>{{IpV4}}</div></div><div class=row><div class=col-4>IPv6 address:</div><div class=col-8>{{IpV6}}</div></div> {{#NetworkState.ApMode}} <div class=\"mt-4 alert alert-warning\" role=alert><p>Not connected to an access point. Consider configuring the access point.</p></div> {{/NetworkState.ApMode}} {{#NetworkState.OnLine}} <div class=\"mt-4 alert alert-success\" role=alert><p>Connected to the access point</p></div> {{/NetworkState.OnLine}} </div></div></div><div class=col-sm-6><div class=\"card bg-light mb-3\"><h5 class=card-header>Settings</h5><div class=card-body><div class=row><div class=col-4>Camera type:</div><div class=col-8>{{CameraType}}</div></div><div class=row><div class=col-4>Frame rate:</div><div class=col-8>{{FrameDuration}} ms ({{FrameFrequency}} f/s)</div></div><div class=row><div class=col-4>Frame size:</div><div class=col-8>{{FrameSize}}</div></div><div class=row><div class=col-4>Frame buffer location:</div><div class=col-8>{{FrameBufferLocation}}</div></div><div class=row><div class=col-4>Frame buffers:</div><div class=col-8>{{FrameBuffers}}</div></div><div class=row><div class=col-4>JPEG quality:</div><div class=col-8>{{JpegQuality}} (0-100)</div></div> {{#CameraInitialized}} <div class=\"mt-4 alert alert-success\" role=alert><p>Camera was initialized successfully!</p></div> {{/CameraInitialized}} {{^CameraInitialized}} <div class=\"mt-4 alert alert-danger\" role=alert><p>Failed to initialize the camera!</p><p>Result: {{CameraInitResultText}} ({{CameraInitResult}})</p><p>Please check hardware or correct the camera settings and restart.</p><button type=button class=\"btn btn-danger\" onclick=\"location.href='restart'\">Restart</button></div> {{/CameraInitialized}} </div></div></div></div><div class=row><div class=\"card bg-light mb-3\"><h5 class=card-header>Camera stream</h5><div class=card-body></p>The camera stream can be found at the following location: <a href=rtsp://{{HostName}}:{{RtspPort}}/mjpeg/1>rtsp://{{HostName}}:{{RtspPort}}/mjpeg/1</a></p><!-- <img class=\"rounded mx-auto d-block\" src=\"snapshot\" alt=\"Camera image\" width=\"25%\">--></div></div></div></div><div class=\"d-grid gap-2 col-6 mx-auto\"><button type=button class=\"btn btn-lg btn-warning\" onclick=\"location.href='config'\">Settings</button></div></div></body></html>";
constexpr char file_data_restart_html[] = "<!DOCTYPE html><html lang=en><head><meta charset=utf-8><meta name=viewport content=\"width=device-width, initial-scale=1, shrink-to-fit=no\"><link rel=stylesheet href=bootstrap.min.css><meta http-equiv=refresh content=\"30;url=/index.html\"><title>{{AppTitle}} v{{AppVersion}}</title></head><body><div class=container><h1 class=text-center>{{ThingName}}</h1><hr><div class=\"jumbotron bg-light\"><h1 class=\"display-4 text-center\">Restart</h1><p class=\"lead text-center\">The device is restarting.</p><hr class=\"my-4 \"><p class=text-center>In some cases, the device requires a hard reset (power cycle).</p><p class=text-center>If this page takes longer than a minute, consider performing a power cycle.</p><div class=\"d-flex justify-content-center\"><div class=\"spinner-border text-danger\" role=status><span class=visually-hidden>Restarting...</span></div></div></div></div></body></html>";
