//
//  ViewController.h
//  functionAndVariable
//
//  Created by ConnectivitySW on 2022/01/19.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (IBAction)setCountButton:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *setCountText;

@property int count;

@end

