//metadoc ALDevice copyright Bruno Conti 2009
//metadoc ALDevice license BSD revised

#import "ALObject.h"

@interface ALDevice : ALObject
{	
	ALCdevice *alcDevice;
}

+ defaultDevice;

- (void)openDefault;
- (void)close;

- (ALCdevice *)alcDevice;
- newContext;

@end