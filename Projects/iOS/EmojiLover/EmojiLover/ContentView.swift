//
//  ContentView.swift
//  EmojiLover
//
//  Created by Kulyash Dahiya on 21/07/24.
//

import SwiftUI

enum Emoji: String {
    case 😀,😋,😍
}

struct ContentView: View {
    var selection: Emoji = .😍
    
    var body: some View {
        Text("Hello Love")
        Text(selection.rawValue).font(.system(size: 150))
    }
}

#Preview {
    ContentView()
}
