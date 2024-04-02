var script = document.createElement('script');
script.addEventListener('load', function() {
    var dataElement = document.getElementById('frameworks_detector');
    var data = JSON.parse(dataElement.innerText);
    dataElement.parentNode.removeChild(dataElement);
    chrome.runtime.sendMessage(data); 
}, true);
script.src = chrome.runtime.getURL('inject.js'); 
if (document.head) {
    document.head.appendChild(script);
}


