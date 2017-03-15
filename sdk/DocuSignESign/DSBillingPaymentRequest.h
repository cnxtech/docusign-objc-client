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




@protocol DSBillingPaymentRequest
@end

@interface DSBillingPaymentRequest : DSObject

/* The payment amount for the past due invoices. This value must match the pastDueBalance value retrieved using Get Past Due Invoices. [optional]
 */
@property(nonatomic) NSString* paymentAmount;

@end
