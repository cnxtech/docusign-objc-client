#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
* DocuSign REST API
* The DocuSign REST API provides you with a powerful, convenient, and simple Web services API for interacting with DocuSign.
*
* OpenAPI spec version: v2
* Contact: devcenter@docusign.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "DSErrorDetails.h"


@protocol DSNewUser
@end

@interface DSNewUser : DSObject

/* Contains a token that can be used for authentication in API calls instead of using the user name and password. [optional]
 */
@property(nonatomic) NSString* apiPassword;
/* Indicates the date and time the item was created. [optional]
 */
@property(nonatomic) NSString* createdDateTime;
/*  [optional]
 */
@property(nonatomic) NSString* email;

@property(nonatomic) DSErrorDetails* errorDetails;
/*  [optional]
 */
@property(nonatomic) NSString* permissionProfileId;
/*  [optional]
 */
@property(nonatomic) NSString* permissionProfileName;
/*  [optional]
 */
@property(nonatomic) NSString* uri;
/* Specifies the user ID for the new user. [optional]
 */
@property(nonatomic) NSString* userId;
/*  [optional]
 */
@property(nonatomic) NSString* userName;
/*  [optional]
 */
@property(nonatomic) NSString* userStatus;

@end
