/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSNumber, ASSettingsTaskUserInformationGetResponse;



@interface ASSettingsTaskUserInformationResponse : ASItem 
{
    NSNumber *_status;
    ASSettingsTaskUserInformationGetResponse *_getResponse;
}

@property(retain) ASSettingsTaskUserInformationGetResponse *getResponse; /* unknown property attribute: V_getResponse */
@property(retain) NSNumber *status; /* unknown property attribute: V_status */

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;

- (void)dealloc;
- (id)description;
- (id)asParseRules;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (id)getResponse;
- (void)setGetResponse:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;

@end