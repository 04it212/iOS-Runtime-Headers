/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class NSString, IMAccount;

@interface CNFRegAlias : NSObject {
    IMAccount *_account;
    NSString *_alias;
    NSString *_displayName;
}

@property(retain) IMAccount * account;
@property(copy) NSString * alias;
@property(readonly) NSString * displayName;
@property(readonly) NSString * identifier;
@property(readonly) int type;

- (id)account;
- (id)alias;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithAccount:(id)arg1 alias:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLocalPhoneNumberAlias;
- (BOOL)isPhoneNumberAliasOnPhoneNumberAccount;
- (int)localizedCaseInsensitiveCompare:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (int)type;
- (BOOL)validate;
- (int)validationErrorReason;
- (int)validationStatus;

@end