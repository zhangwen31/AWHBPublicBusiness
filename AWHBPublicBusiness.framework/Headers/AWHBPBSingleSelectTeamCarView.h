//
//  AWHBPBSingleSelectTeamCarView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/2/26.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBReturnCarModelblock)(AWHBBCarModel *model);
@interface AWHBPBSingleSelectTeamCarView : UIView
@property (nonatomic, assign) BOOL isVideo;
@property(nonatomic,copy)AWHBPBReturnCarModelblock ReturnCarModelblock;
- (instancetype)initWithIsVideo:(BOOL)isVideo;
@end

NS_ASSUME_NONNULL_END
