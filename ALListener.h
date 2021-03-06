//metadoc ALListener copyright Bruno Conti 2009
//metadoc ALListener license BSD revised

#import "ALObject.h"

@interface ALListener : ALObject
{	
	id context;
}

@property (nonatomic, assign) id context; 

- (void)setPosition:(ALpoint)p;
- (ALpoint)position;

- (void)setVelocity:(ALpoint)p;
- (ALpoint)velocity;

- (void)setRotation:(ALfloat)radians;
- (ALfloat)rotation;

- (void)setDirection:(ALpoint)d;
- (ALpoint)direction;

@end
