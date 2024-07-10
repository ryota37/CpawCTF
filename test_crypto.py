def decrypt_caesar_cipher(text, shift=3):
    decrypted_text = ""

    for char in text:
        if char.isalpha():  # 文字がアルファベットの場合
            shift_base = ord('A') if char.isupper() else ord('a')
            decrypted_char = chr((ord(char) - shift_base - shift) % 26 + shift_base)
            decrypted_text += decrypted_char
        else:
            decrypted_text += char  # アルファベット以外の文字はそのまま追加

    return decrypted_text

# テスト用の暗号化されたテキスト
ciphertext = "fsdz{Fdhvdu_flskhu_lv_fodvvlfdo_flskhu}"
decrypted_text = decrypt_caesar_cipher(ciphertext)
print(decrypted_text)  # 結果: "cpaw"

