#include "window_keycodes.h"

std::ostream& operator<<(std::ostream& os, const WindowKey& k) {
	std::ios::fmtflags oldFlag = os.flags();
	switch (k) {
		case WindowKey::None: { os << "None" << std::endl; } break;
		case WindowKey::LButton: { os << "LButton" << std::endl; } break;
		case WindowKey::RButton: { os << "RButton" << std::endl; } break;
		case WindowKey::Cancel: { os << "Cancel" << std::endl; } break;
		case WindowKey::MButton: { os << "MButton" << std::endl; } break;
		case WindowKey::XButton1: { os << "XButton1" << std::endl; } break;
		case WindowKey::XButton2: { os << "XButton2" << std::endl; } break;
		case WindowKey::Back: { os << "Back" << std::endl; } break;
		case WindowKey::Tab: { os << "Tab" << std::endl; } break;
		case WindowKey::Clear: { os << "Clear" << std::endl; } break;
		case WindowKey::Enter: { os << "Enter" << std::endl; } break;
		case WindowKey::ShiftKey: { os << "ShiftKey" << std::endl; } break;
		case WindowKey::ControlKey: { os << "ControlKey" << std::endl; } break;
		case WindowKey::AltKey: { os << "AltKey" << std::endl; } break;
		case WindowKey::Pause: { os << "Pause" << std::endl; } break;
		case WindowKey::Capital: { os << "CapsLock" << std::endl; } break;
		case WindowKey::KanaMode: { os << "KanaMode" << std::endl; } break;
		case WindowKey::JunjaMode: { os << "JunjaMode" << std::endl; } break;
		case WindowKey::FinalMode: { os << "FinalMode" << std::endl; } break;
		case WindowKey::HanjaMode: { os << "HanjaMode" << std::endl; } break;
		case WindowKey::Escape: { os << "Escape" << std::endl; } break;
		case WindowKey::IMEConvert: { os << "IMEConvert" << std::endl; } break;
		case WindowKey::IMINoConvert: { os << "IMINoConvert" << std::endl; } break;
		case WindowKey::IMEAccept: { os << "IMEAccept" << std::endl; } break;
		case WindowKey::IMIModeChange: { os << "IMIModeChange" << std::endl; } break;
		case WindowKey::Space: { os << "Space" << std::endl; } break;
		case WindowKey::Prior: { os << "Prior" << std::endl; } break;
		case WindowKey::Next: { os << "Next" << std::endl; } break;
		case WindowKey::End: { os << "End" << std::endl; } break;
		case WindowKey::Home: { os << "Home" << std::endl; } break;
		case WindowKey::Left: { os << "Left" << std::endl; } break;
		case WindowKey::Up: { os << "Up" << std::endl; } break;
		case WindowKey::Right: { os << "Right" << std::endl; } break;
		case WindowKey::Down: { os << "Down" << std::endl; } break;
		case WindowKey::Select: { os << "Select" << std::endl; } break;
		case WindowKey::Print: { os << "Print" << std::endl; } break;
		case WindowKey::Execute: { os << "Execute" << std::endl; } break;
		case WindowKey::PrintScreen: { os << "PrintScreen" << std::endl; } break;
		case WindowKey::Insert: { os << "Insert" << std::endl; } break;
		case WindowKey::Delete: { os << "Delete" << std::endl; } break;
		case WindowKey::Help: { os << "Help" << std::endl; } break;
		case WindowKey::D0: { os << "D0" << std::endl; } break;
		case WindowKey::D1: { os << "D1" << std::endl; } break;
		case WindowKey::D2: { os << "D2" << std::endl; } break;
		case WindowKey::D3: { os << "D3" << std::endl; } break;
		case WindowKey::D4: { os << "D4" << std::endl; } break;
		case WindowKey::D5: { os << "D5" << std::endl; } break;
		case WindowKey::D6: { os << "D6" << std::endl; } break;
		case WindowKey::D7: { os << "D7" << std::endl; } break;
		case WindowKey::D8: { os << "D8" << std::endl; } break;
		case WindowKey::D9: { os << "D9" << std::endl; } break;
		case WindowKey::A: { os << "A" << std::endl; } break;
		case WindowKey::B: { os << "B" << std::endl; } break;
		case WindowKey::C: { os << "C" << std::endl; } break;
		case WindowKey::D: { os << "D" << std::endl; } break;
		case WindowKey::E: { os << "E" << std::endl; } break;
		case WindowKey::F: { os << "F" << std::endl; } break;
		case WindowKey::G: { os << "G" << std::endl; } break;
		case WindowKey::H: { os << "H" << std::endl; } break;
		case WindowKey::I: { os << "I" << std::endl; } break;
		case WindowKey::J: { os << "J" << std::endl; } break;
		case WindowKey::K: { os << "K" << std::endl; } break;
		case WindowKey::L: { os << "L" << std::endl; } break;
		case WindowKey::M: { os << "M" << std::endl; } break;
		case WindowKey::N: { os << "N" << std::endl; } break;
		case WindowKey::O: { os << "O" << std::endl; } break;
		case WindowKey::P: { os << "P" << std::endl; } break;
		case WindowKey::Q: { os << "Q" << std::endl; } break;
		case WindowKey::R: { os << "R" << std::endl; } break;
		case WindowKey::S: { os << "S" << std::endl; } break;
		case WindowKey::T: { os << "T" << std::endl; } break;
		case WindowKey::U: { os << "U" << std::endl; } break;
		case WindowKey::V: { os << "V" << std::endl; } break;
		case WindowKey::W: { os << "W" << std::endl; } break;
		case WindowKey::X: { os << "X" << std::endl; } break;
		case WindowKey::Y: { os << "Y" << std::endl; } break;
		case WindowKey::Z: { os << "Z" << std::endl; } break;
		case WindowKey::LWin: { os << "LWin" << std::endl; } break;
		case WindowKey::RWin: { os << "RWin" << std::endl; } break;
		case WindowKey::Apps: { os << "Apps" << std::endl; } break;
		case WindowKey::Sleep: { os << "Sleep" << std::endl; } break;
		case WindowKey::NumPad0: { os << "NumPad0" << std::endl; } break;
		case WindowKey::NumPad1: { os << "NumPad1" << std::endl; } break;
		case WindowKey::NumPad2: { os << "NumPad2" << std::endl; } break;
		case WindowKey::NumPad3: { os << "NumPad3" << std::endl; } break;
		case WindowKey::NumPad4: { os << "NumPad4" << std::endl; } break;
		case WindowKey::NumPad5: { os << "NumPad5" << std::endl; } break;
		case WindowKey::NumPad6: { os << "NumPad6" << std::endl; } break;
		case WindowKey::NumPad7: { os << "NumPad7" << std::endl; } break;
		case WindowKey::NumPad8: { os << "NumPad8" << std::endl; } break;
		case WindowKey::NumPad9: { os << "NumPad9" << std::endl; } break;
		case WindowKey::Multiply: { os << "Multiply" << std::endl; } break;
		case WindowKey::Add: { os << "Add" << std::endl; } break;
		case WindowKey::Separator: { os << "Separator" << std::endl; } break;
		case WindowKey::Subtract: { os << "Subtract" << std::endl; } break;
		case WindowKey::Decimal: { os << "Decimal" << std::endl; } break;
		case WindowKey::Divide: { os << "Divide" << std::endl; } break;
		case WindowKey::F1: { os << "F1" << std::endl; } break;
		case WindowKey::F2: { os << "F2" << std::endl; } break;
		case WindowKey::F3: { os << "F3" << std::endl; } break;
		case WindowKey::F4: { os << "F4" << std::endl; } break;
		case WindowKey::F5: { os << "F5" << std::endl; } break;
		case WindowKey::F6: { os << "F6" << std::endl; } break;
		case WindowKey::F7: { os << "F7" << std::endl; } break;
		case WindowKey::F8: { os << "F8" << std::endl; } break;
		case WindowKey::F9: { os << "F9" << std::endl; } break;
		case WindowKey::F10: { os << "F10" << std::endl; } break;
		case WindowKey::F11: { os << "F11" << std::endl; } break;
		case WindowKey::F12: { os << "F12" << std::endl; } break;
		case WindowKey::F13: { os << "F13" << std::endl; } break;
		case WindowKey::F14: { os << "F14" << std::endl; } break;
		case WindowKey::F15: { os << "F15" << std::endl; } break;
		case WindowKey::F16: { os << "F16" << std::endl; } break;
		case WindowKey::F17: { os << "F17" << std::endl; } break;
		case WindowKey::F18: { os << "F18" << std::endl; } break;
		case WindowKey::F19: { os << "F19" << std::endl; } break;
		case WindowKey::F20: { os << "F20" << std::endl; } break;
		case WindowKey::F21: { os << "F21" << std::endl; } break;
		case WindowKey::F22: { os << "F22" << std::endl; } break;
		case WindowKey::F23: { os << "F23" << std::endl; } break;
		case WindowKey::F24: { os << "F24" << std::endl; } break;
		case WindowKey::NumLock: { os << "NumLock" << std::endl; } break;
		case WindowKey::Scroll: { os << "Scroll" << std::endl; } break;
		case WindowKey::LShiftKey: { os << "LShiftKey" << std::endl; } break;
		case WindowKey::RShiftKey: { os << "RShiftKey" << std::endl; } break;
		case WindowKey::LControlKey: { os << "LControlKey" << std::endl; } break;
		case WindowKey::RControlKey: { os << "RControlKey" << std::endl; } break;
		case WindowKey::LMenu: { os << "LMenu" << std::endl; } break;
		case WindowKey::RMenu: { os << "RMenu" << std::endl; } break;
		case WindowKey::BrowserBack: { os << "BrowserBack" << std::endl; } break;
		case WindowKey::BrowserForward: { os << "BrowserForward" << std::endl; } break;
		case WindowKey::BrowserRefresh: { os << "BrowserRefresh" << std::endl; } break;
		case WindowKey::BrowserStop: { os << "BrowserStop" << std::endl; } break;
		case WindowKey::BrowserSearch: { os << "BrowserSearch" << std::endl; } break;
		case WindowKey::BrowserFavorites: { os << "BrowserFavorites" << std::endl; } break;
		case WindowKey::BrowserHome: { os << "BrowserHome" << std::endl; } break;
		case WindowKey::VolumeMute: { os << "VolumeMute" << std::endl; } break;
		case WindowKey::VolumeDown: { os << "VolumeDown" << std::endl; } break;
		case WindowKey::VolumeUp: { os << "VolumeUp" << std::endl; } break;
		case WindowKey::MediaNextTrack: { os << "MediaNextTrack" << std::endl; } break;
		case WindowKey::MediaPreviousTrack: { os << "MediaPreviousTrack" << std::endl; } break;
		case WindowKey::MediaStop: { os << "MediaStop" << std::endl; } break;
		case WindowKey::MediaPlayPause: { os << "MediaPlayPause" << std::endl; } break;
		case WindowKey::LaunchMail: { os << "LaunchMail" << std::endl; } break;
		case WindowKey::SelectMedia: { os << "SelectMedia" << std::endl; } break;
		case WindowKey::LaunchApplication1: { os << "LaunchApplication1" << std::endl; } break;
		case WindowKey::LaunchApplication2: { os << "LaunchApplication2" << std::endl; } break;
		case WindowKey::OemSemicolon: { os << "OemSemicolon" << std::endl; } break;
		case WindowKey::OemPlus: { os << "OemPlus" << std::endl; } break;
		case WindowKey::OemComma: { os << "OemComma" << std::endl; } break;
		case WindowKey::OemMinus: { os << "OemMinus" << std::endl; } break;
		case WindowKey::OemPeriod: { os << "OemPeriod" << std::endl; } break;
		case WindowKey::OemQuestion: { os << "OemQuestion" << std::endl; } break;
		case WindowKey::OemTilde: { os << "OemTilde" << std::endl; } break;
		case WindowKey::OemOpenBrackets: { os << "OemOpenBrackets" << std::endl; } break;
		case WindowKey::OemPipe: { os << "OemPipe" << std::endl; } break;
		case WindowKey::OemCloseBrackets: { os << "OemCloseBrackets" << std::endl; } break;
		case WindowKey::OemQuotes: { os << "OemQuotes" << std::endl; } break;
		case WindowKey::Oem8: { os << "Oem8" << std::endl; } break;
		case WindowKey::OemBackslash: { os << "OemBackslash" << std::endl; } break;
		case WindowKey::ProcessKey: { os << "ProcessKey" << std::endl; } break;
		case WindowKey::Packet: { os << "Packet" << std::endl; } break;
		case WindowKey::Attn: { os << "Attn" << std::endl; } break;
		case WindowKey::CrSel: { os << "CrSel" << std::endl; } break;
		case WindowKey::ExSel: { os << "ExSel" << std::endl; } break;
		case WindowKey::EraseEof: { os << "EraseEof" << std::endl; } break;
		case WindowKey::Play: { os << "Play" << std::endl; } break;
		case WindowKey::Zoom: { os << "Zoom" << std::endl; } break;
		case WindowKey::NoName: { os << "NoName" << std::endl; } break;
		case WindowKey::Pa1: { os << "Pa1" << std::endl; } break;
		case WindowKey::OemClear: { os << "OemClear" << std::endl; } break;
		default:
			break;
	}
	os.flags(oldFlag);
	return os;
}