/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKMutablePayment : SKPayment

@property (nonatomic, copy) NSString *applicationUsername;
@property (nonatomic, copy) NSString *partnerIdentifier;
@property (nonatomic, copy) NSString *partnerTransactionIdentifier;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic) int quantity;
@property (nonatomic, copy) NSData *requestData;
@property (nonatomic, copy) NSDictionary *requestParameters;
@property (nonatomic) BOOL simulatesAskToBuyInSandbox;

- (void)setApplicationUsername:(id)arg1;
- (void)setPartnerIdentifier:(id)arg1;
- (void)setPartnerTransactionIdentifier:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setQuantity:(int)arg1;
- (void)setRequestData:(id)arg1;
- (void)setRequestParameters:(id)arg1;
- (void)setSimulatesAskToBuyInSandbox:(BOOL)arg1;

@end
