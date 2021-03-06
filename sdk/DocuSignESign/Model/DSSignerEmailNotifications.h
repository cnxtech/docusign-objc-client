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




@protocol DSSignerEmailNotifications
@end

@interface DSSignerEmailNotifications : DSObject

/* When set to **true**, the user receives agent notification emails. [optional]
 */
@property(nonatomic) NSString* agentNotification;
/* When set to **true**, the user receives notifications of carbon copy deliveries. [optional]
 */
@property(nonatomic) NSString* carbonCopyNotification;
/* When set to **true**, the user receives notifications of certified deliveries. [optional]
 */
@property(nonatomic) NSString* certifiedDeliveryNotification;
/* When set to **true**, the user receives notification that document markup has been activated. [optional]
 */
@property(nonatomic) NSString* documentMarkupActivation;
/* When set to **true**, the user receives notification that the envelope has been activated. [optional]
 */
@property(nonatomic) NSString* envelopeActivation;
/* When set to **true**, the user receives notification that the envelope has been completed. [optional]
 */
@property(nonatomic) NSString* envelopeComplete;
/* When set to **true**, the user receives notification that the envelope has been corrected. [optional]
 */
@property(nonatomic) NSString* envelopeCorrected;
/* When set to **true**, the user receives notification that the envelope has been declined. [optional]
 */
@property(nonatomic) NSString* envelopeDeclined;
/* When set to **true**, the user receives notification that the envelope has been voided. [optional]
 */
@property(nonatomic) NSString* envelopeVoided;
/* Reserved: [optional]
 */
@property(nonatomic) NSString* faxReceived;
/* When set to **true**, the user receives notification if the offline signing failed. [optional]
 */
@property(nonatomic) NSString* offlineSigningFailed;
/* When set to **true**, the user receives notification of document purges. [optional]
 */
@property(nonatomic) NSString* purgeDocuments;
/* When set to **true**, the user receives notification that the envelope has been reassigned. [optional]
 */
@property(nonatomic) NSString* reassignedSigner;
/*  [optional]
 */
@property(nonatomic) NSString* whenSigningGroupMember;

@end
