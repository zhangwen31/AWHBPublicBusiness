//
//  AWHBPBRestingPointStateView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^filtrationBlock)(NSString *trueString);
typedef void(^showBlock)(NSString *falseString);
typedef void(^filterAppendBlock)(NSString *falseString);
@interface AWHBPBRestingPointStateView : UIView
@property(nonatomic,copy)filtrationBlock filtrationBlock;
@property(nonatomic,copy)showBlock showBlock;
@property(nonatomic,copy)filterAppendBlock filterAppendBlock;
@end

NS_ASSUME_NONNULL_END
