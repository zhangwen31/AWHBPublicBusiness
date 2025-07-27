//
//  AWHBPBSingleSelectTeamCarNewView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/9/21.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBReturnCarModelNewblock)(AWHBBCarModel *model);
@interface AWHBPBSingleSelectTeamCarNewView : UIView
@property (nonatomic, assign) BOOL isVideo;
@property(nonatomic,copy)AWHBPBReturnCarModelNewblock ReturnCarModelblock;
- (instancetype)initWithIsVideo:(BOOL)isVideo;
@end

NS_ASSUME_NONNULL_END
