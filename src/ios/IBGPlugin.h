#import <Cordova/CDVPlugin.h>

@interface IBGPlugin : CDVPlugin 

- (void)pluginInitialize;

- (void) invoke:(CDVInvokedUrlCommand*)command;

- (void) showIntroDialog:(CDVInvokedUrlCommand*)command;

- (void) setPrimaryColor:(CDVInvokedUrlCommand*)command;

- (void) setUserEmail:(CDVInvokedUrlCommand*)command;

- (void) setUserName:(CDVInvokedUrlCommand*)command;

- (void) setUserData:(CDVInvokedUrlCommand*)command;

- (void) addFile:(CDVInvokedUrlCommand*)command;

- (void) addLog:(CDVInvokedUrlCommand*)command;

- (void) changeInvocationEvent:(CDVInvokedUrlCommand*)command;

- (void) setLocale:(CDVInvokedUrlCommand*)command;

- (void) setUserAttribute:(CDVInvokedUrlCommand*)command;

- (void) setOptions:(CDVInvokedUrlCommand*)command;

@end
