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


#import "DSBillingInvoice.h"


@protocol DSBillingPlanPreview
@end

@interface DSBillingPlanPreview : DSObject

/* Specifies the ISO currency code for the account. [optional]
 */
@property(nonatomic) NSString* currencyCode;

@property(nonatomic) DSBillingInvoice* invoice;
/*  [optional]
 */
@property(nonatomic) NSString* isProrated;
/*  [optional]
 */
@property(nonatomic) NSString* subtotalAmount;
/*  [optional]
 */
@property(nonatomic) NSString* taxAmount;
/*  [optional]
 */
@property(nonatomic) NSString* totalAmount;

@end
