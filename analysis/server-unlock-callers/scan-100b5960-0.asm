
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b5960 <.text+0xb4960>:
100b5960:	55                   	push   ebp
100b5961:	8b ec                	mov    ebp,esp
100b5963:	56                   	push   esi
100b5964:	8b f1                	mov    esi,ecx
100b5966:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100b5969:	85 c9                	test   ecx,ecx
100b596b:	74 1b                	je     0x100b5988
100b596d:	6a 00                	push   0x0
100b596f:	6a 00                	push   0x0
100b5971:	68 00 00 00 01       	push   0x1000000
100b5976:	e8 85 76 02 00       	call   0x100dd000
100b597b:	84 c0                	test   al,al
100b597d:	75 09                	jne    0x100b5988
100b597f:	56                   	push   esi
100b5980:	e8 7b 3f 06 00       	call   0x10119900
100b5985:	83 c4 04             	add    esp,0x4
100b5988:	5e                   	pop    esi
100b5989:	5d                   	pop    ebp
100b598a:	c2 04 00             	ret    0x4
