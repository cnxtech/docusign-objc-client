#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol DSAttachment
@end

@interface DSAttachment : DSObject

/*  [optional]
 */
@property(nonatomic) NSString* label;
/* Specifies the type of the attachment for the recipient. [optional]
 */
@property(nonatomic) NSString* attachmentType;

@end
