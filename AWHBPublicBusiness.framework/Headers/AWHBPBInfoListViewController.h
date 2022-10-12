//
//  AWHBPBInfoListViewController.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/6/11.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBBasicBusiness/AWHBBasicBusiness.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBInfoListViewController : AWHBBBaseViewController

@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)void(^selectModelBlock)(AWHBBCarModel *model);

@end

NS_ASSUME_NONNULL_END
