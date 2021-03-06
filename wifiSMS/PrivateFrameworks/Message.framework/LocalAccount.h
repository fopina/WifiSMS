/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */



@interface LocalAccount : MailAccount 
{
}

+ (id)localAccount;
+ (id)accountTypeString;

- (id)initWithPath:(id)arg1;
- (id)uniqueId;
- (Class)storeClass;
- (id)mailboxPathExtension;
- (id)primaryMailboxUid;
- (void)setPath:(id)arg1;
- (id)displayName;
- (void)setHostname:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)password:(BOOL)arg1;
- (void)setPassword:(id)arg1;
- (BOOL)canFetch;
- (NSInteger)fetchSynchronously;
- (BOOL)isOffline;
- (void)setIsOffline:(BOOL)arg1;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(NSUInteger)arg3 existingMailboxUid:(id)arg4 permanentTag:(id)arg5 dictionary:(id)arg6;
- (BOOL)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (id)mailboxUidForFileSystemPath:(id)arg1;
- (id)_URLScheme;
- (id)_infoForMatchingURL:(id)arg1;

@end
