//
//  ContentView.swift
//  WebViewTest
//
//  Created by Lalit Yalamanchili on 2021/03/24.
//

import SwiftUI

struct ContentView: View {
    var body: some View {
        Webview(url: "https://dojo.galileoxp.com")
            .edgesIgnoringSafeArea(.bottom)
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
