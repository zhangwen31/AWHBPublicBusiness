//
//  AWHBPBSingleCarSelectionViewController.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/2/26.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN
@protocol AWHBPBReturnCarModelDelegate <NSObject>
- (void)returnCarModel:(AWHBBCarModel *)model;
@end
@interface AWHBPBSingleCarSelectionViewController : AWHBBBaseViewController
@property (nonatomic, assign) BOOL isVideo;
@property (nonatomic, weak) id <AWHBPBReturnCarModelDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
