//
//  WebView.swift
//  Trekr
//
//  Created by Lalit Yalamanchili on 2021/03/24.
//

import Foundation
import WebKit
import SwiftUI

struct Webview: UIViewRepresentable {
    var url: String
    
    func makeUIView(context: Context) -> some WKWebView {
        
        guard let url = URL(string: self.url) else {
            return WKWebView()
        }
        
        let request = URLRequest(url: url)
        let wkWebView = WKWebView()
        wkWebView.load(request)
        return wkWebView
        
    }
    
    func updateUIView(_ uiView: UIViewType, context: Context) {
        
    }
}
