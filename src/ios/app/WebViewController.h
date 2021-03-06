/*    
 * Copyright (C) 2020, Twinkle Labs, LLC.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import "UIViewController+Alert.h"

@interface WebViewController : UIViewController <WKNavigationDelegate>

@property (nonatomic, copy) NSURL* urlToLoad;
@property (nonatomic, strong) WKWebView* webView;
@property (nonatomic, strong) id <WKUIDelegate> webViewUIDelegate;
@property (nonatomic, assign) BOOL useLoadFileURLreadAccessURL;
- (void)openURL:(NSURL*)url;
- (void)setDeviceToken:(NSString*)token;
@end

