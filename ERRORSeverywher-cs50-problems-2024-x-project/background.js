chrome.runtime.onInstalled.addListener(() => {
  console.log('Service Worker Active.');
});

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  console.log(message);
  console.log(sender);
  console.log(sendResponse)

  if (message.length === 0) return;
  if (!sender.tab.url.match(/^https?:\/\//)) return;

  const tabId = sender.tab.id;
  const title = message.map(framework => 
      framework.version ? `${framework.name} (${framework.version})` : framework.name
  ).join('\n');

  chrome.action.setTitle({tabId, title});
  
  const popup = 'popup.html#' + encodeURIComponent(JSON.stringify(message));
  chrome.action.setPopup({tabId, popup});

  sendResponse({success: true});
});