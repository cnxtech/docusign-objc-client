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


#import "DSMoney.h"
#import "DSPaymentLineItem.h"


@protocol DSPaymentDetails
@end

@interface DSPaymentDetails : DSObject

/*  [optional]
 */
@property(nonatomic) NSString* currencyCode;
/*  [optional]
 */
@property(nonatomic) NSString* gatewayAccountId;
/*  [optional]
 */
@property(nonatomic) NSArray<DSPaymentLineItem>* lineItems;
/* Indicates the envelope status. Valid values are:  * sent - The envelope is sent to the recipients.  * created - The envelope is saved as a draft and can be modified and sent later. [optional]
 */
@property(nonatomic) NSString* status;

@property(nonatomic) DSMoney* total;

@end
