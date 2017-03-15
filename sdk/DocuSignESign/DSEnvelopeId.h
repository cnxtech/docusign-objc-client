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
#import "DSMergeField.h"


@protocol DSEnvelopeId
@end

@interface DSEnvelopeId : DSObject

/* When set to **true**, the anchor string does not consider case when matching strings in the document. The default value is **true**. [optional]
 */
@property(nonatomic) NSString* anchorCaseSensitive;
/* Specifies the alignment of anchor tabs with anchor strings. Possible values are **left** or **right**. The default value is **left**. [optional]
 */
@property(nonatomic) NSString* anchorHorizontalAlignment;
/* When set to **true**, this tab is ignored if anchorString is not found in the document. [optional]
 */
@property(nonatomic) NSString* anchorIgnoreIfNotPresent;
/* When set to **true**, the anchor string in this tab matches whole words only (strings embedded in other strings are ignored.) The default value is **true**. [optional]
 */
@property(nonatomic) NSString* anchorMatchWholeWord;
/* Anchor text information for a radio button. [optional]
 */
@property(nonatomic) NSString* anchorString;
/* Specifies units of the X and Y offset. Units could be pixels, millimeters, centimeters, or inches. [optional]
 */
@property(nonatomic) NSString* anchorUnits;
/* Specifies the X axis location of the tab, in achorUnits, relative to the anchorString. [optional]
 */
@property(nonatomic) NSString* anchorXOffset;
/* Specifies the Y axis location of the tab, in achorUnits, relative to the anchorString. [optional]
 */
@property(nonatomic) NSString* anchorYOffset;
/* When set to **true**, the information in the tab is bold. [optional]
 */
@property(nonatomic) NSString* bold;
/* For conditional fields this is the TabLabel of the parent tab that controls this tab's visibility. [optional]
 */
@property(nonatomic) NSString* conditionalParentLabel;
/* For conditional fields, this is the value of the parent tab that controls the tab's visibility.  If the parent tab is a Checkbox, Radio button, Optional Signature, or Optional Initial use \"on\" as the value to show that the parent tab is active.  [optional]
 */
@property(nonatomic) NSString* conditionalParentValue;
/* The DocuSign generated custom tab ID for the custom tab to be applied. This can only be used when adding new tabs for a recipient. When used, the new tab inherits all the custom tab properties. [optional]
 */
@property(nonatomic) NSString* customTabId;
/* Specifies the document ID number that the tab is placed on. This must refer to an existing Document's ID attribute. [optional]
 */
@property(nonatomic) NSString* documentId;

@property(nonatomic) DSErrorDetails* errorDetails;
/* The font to be used for the tab value. Supported Fonts: Arial, Arial, ArialNarrow, Calibri, CourierNew, Garamond, Georgia, Helvetica,   LucidaConsole, Tahoma, TimesNewRoman, Trebuchet, Verdana, MSGothic, MSMincho, Default. [optional]
 */
@property(nonatomic) NSString* font;
/* The font color used for the information in the tab.  Possible values are: Black, BrightBlue, BrightRed, DarkGreen, DarkRed, Gold, Green, NavyBlue, Purple, or White. [optional]
 */
@property(nonatomic) NSString* fontColor;
/* The font size used for the information in the tab.  Possible values are: Size7, Size8, Size9, Size10, Size11, Size12, Size14, Size16, Size18, Size20, Size22, Size24, Size26, Size28, Size36, Size48, or Size72. [optional]
 */
@property(nonatomic) NSString* fontSize;
/* When set to **true**, the information in the tab is italic. [optional]
 */
@property(nonatomic) NSString* italic;

@property(nonatomic) DSMergeField* mergeField;
/*  [optional]
 */
@property(nonatomic) NSString* name;
/* Specifies the page number on which the tab is located. [optional]
 */
@property(nonatomic) NSString* pageNumber;
/* Unique for the recipient. It is used by the tab element to indicate which recipient is to sign the Document. [optional]
 */
@property(nonatomic) NSString* recipientId;
/* Indicates the envelope status. Valid values are:  * sent - The envelope is sent to the recipients.  * created - The envelope is saved as a draft and can be modified and sent later. [optional]
 */
@property(nonatomic) NSString* status;
/* The unique identifier for the tab. The tabid can be retrieved with the [ML:GET call].      [optional]
 */
@property(nonatomic) NSString* tabId;
/* The label string associated with the tab. [optional]
 */
@property(nonatomic) NSString* tabLabel;
/*  [optional]
 */
@property(nonatomic) NSString* tabOrder;
/* When set to **true**, the sender cannot change any attributes of the recipient. Used only when working with template recipients.  [optional]
 */
@property(nonatomic) NSString* templateLocked;
/* When set to **true**, the sender may not remove the recipient. Used only when working with template recipients. [optional]
 */
@property(nonatomic) NSString* templateRequired;
/* When set to **true**, the information in the tab is underlined. [optional]
 */
@property(nonatomic) NSString* underline;
/* This indicates the horizontal offset of the object on the page. DocuSign uses 72 DPI when determining position. [optional]
 */
@property(nonatomic) NSString* xPosition;
/* This indicates the vertical offset of the object on the page. DocuSign uses 72 DPI when determining position. [optional]
 */
@property(nonatomic) NSString* yPosition;

@end
