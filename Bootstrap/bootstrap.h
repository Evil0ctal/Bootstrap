#ifndef bootstrap_h
#define bootstrap_h

#define BOOTSTRAP_VERSION   (5)

#import <Foundation/Foundation.h>

void rebuildSignature(NSString *directoryPath);

int bootstrap();

int unbootstrap();

bool isBootstrapInstalled();

bool isSystemBootstrapped();

bool checkBootstrapVersion();

BOOL strictDaemonSandboxEnabled(void);
void strictDaemonSandboxSetEnabled(BOOL enabled);

#endif /* bootstrap_h */
