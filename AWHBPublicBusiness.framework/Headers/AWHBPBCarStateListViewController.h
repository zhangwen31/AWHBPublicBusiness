//
//  AWHBPBCarStateListViewController.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/6/4.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBMapIconDescriptionModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCarStateListViewController : UIViewController

@property (nonatomic, strong) UITableView *tableView;

@property (nonatomic, assign) CGFloat tableViewRight;

@property (nonatomic, strong) NSArray<AWHBPBMapIconDescriptionModel *> *dataArray;

@end

NS_ASSUME_NONNULL_END
