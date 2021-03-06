#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
* DocuSign REST API
* The DocuSign REST API provides you with a powerful, convenient, and simple Web services API for interacting with DocuSign.
*
* OpenAPI spec version: v2
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "DSUserInfo.h"


@protocol DSBrandResources
@end

@interface DSBrandResources : DSObject


@property(nonatomic) DSUserInfo* createdByUserInfo;
/*  [optional]
 */
@property(nonatomic) NSString* createdDate;

@property(nonatomic) DSUserInfo* modifiedByUserInfo;
/*  [optional]
 */
@property(nonatomic) NSString* modifiedDate;
/*  [optional]
 */
@property(nonatomic) NSArray<NSString*>* modifiedTemplates;
/*  [optional]
 */
@property(nonatomic) NSString* resourcesContentType;
/*  [optional]
 */
@property(nonatomic) NSString* resourcesContentUri;

@end
