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




@protocol DSForgottenPasswordInformation
@end

@interface DSForgottenPasswordInformation : DSObject

/* The answer to the first forgotten password challenge question. [optional]
 */
@property(nonatomic) NSString* forgottenPasswordAnswer1;
/* The answer to the second forgotten password challenge question. [optional]
 */
@property(nonatomic) NSString* forgottenPasswordAnswer2;
/* The answer to the third forgotten password challenge question. [optional]
 */
@property(nonatomic) NSString* forgottenPasswordAnswer3;
/* The answer to the fourth forgotten password challenge question. [optional]
 */
@property(nonatomic) NSString* forgottenPasswordAnswer4;
/* The first challenge question presented to a user who has forgotten their password. [optional]
 */
@property(nonatomic) NSString* forgottenPasswordQuestion1;
/* The second challenge question presented to a user who has forgotten their password. [optional]
 */
@property(nonatomic) NSString* forgottenPasswordQuestion2;
/* The third challenge question presented to a user who has forgotten their password. [optional]
 */
@property(nonatomic) NSString* forgottenPasswordQuestion3;
/* The fourth challenge question presented to a user who has forgotten their password. [optional]
 */
@property(nonatomic) NSString* forgottenPasswordQuestion4;

@end
