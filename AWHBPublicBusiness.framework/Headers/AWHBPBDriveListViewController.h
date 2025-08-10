//
//  AWHBPBDriveListViewController.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/8/19.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBPublicBusiness/AWHBPBDriveListModel.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AWHBPBReturnDriveListModelDelegate <NSObject>
- (void)returnDriveListModel:(AWHBPBDriveListModel *)model;
@end

@interface AWHBPBDriveListViewController : AWHBBBaseViewController

@property (nonatomic, weak) id <AWHBPBReturnDriveListModelDelegate> delegate;
@property (nonatomic, strong) AWHBPBDriveListModel *selectModel;
@property (nonatomic, strong) NSString *navTitle;

@end

NS_ASSUME_NONNULL_END
