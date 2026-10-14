'use strict';

const moduleBase = Process.getModuleByName('SoTGame.exe').base;
const target = moduleBase.add(ptr('0x488990'));
const logFile = 'C:\\Users\\KapitanGater\\Documents\\GitHub\\old-sot\\investigation\\bp_graphs\\tick_probe.log';
function log(text) {
    const file = new File(logFile, 'a');
    file.write(text + '\\n');
    file.close();
    console.log(text);
}
log('probe UGameViewportClient::Tick @ ' + target);
let hits = 0;
const listener = Interceptor.attach(target, {
    onEnter() {
        hits++;
        log('UGameViewportClient::Tick hit=' + hits + ' thread=' + Process.getCurrentThreadId());
        if (hits >= 3) listener.detach();
    }
});
