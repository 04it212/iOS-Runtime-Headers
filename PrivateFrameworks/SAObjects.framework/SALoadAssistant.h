/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSString;

@interface SALoadAssistant : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSData * activationToken;
@property(copy) NSString * assistantId;
@property(copy) NSString * connectionType;
@property(copy) NSString * language;
@property(copy) NSString * refId;
@property(copy) NSData * sessionValidationData;
@property(copy) NSString * speechId;

+ (id)loadAssistant;
+ (id)loadAssistantWithDictionary:(id)arg1 context:(id)arg2;

- (id)activationToken;
- (id)assistantId;
- (id)connectionType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)language;
- (id)sessionValidationData;
- (void)setActivationToken:(id)arg1;
- (void)setAssistantId:(id)arg1;
- (void)setConnectionType:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setSessionValidationData:(id)arg1;
- (void)setSpeechId:(id)arg1;
- (id)speechId;

@end
