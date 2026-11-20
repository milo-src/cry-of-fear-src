
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

1007f9e0 <.text+0x7e9e0>:
1007f9e0:	55                   	push   ebp
1007f9e1:	8b ec                	mov    ebp,esp
1007f9e3:	51                   	push   ecx
1007f9e4:	e8 57 00 00 00       	call   0x1007fa40
1007f9e9:	68 e0 00 00 00       	push   0xe0
1007f9ee:	e8 d8 4a 03 00       	call   0x100b44cb
1007f9f3:	83 c4 04             	add    esp,0x4
1007f9f6:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1007f9f9:	85 c0                	test   eax,eax
1007f9fb:	74 30                	je     0x1007fa2d
1007f9fd:	8b c8                	mov    ecx,eax
1007f9ff:	e8 dc fc ff ff       	call   0x1007f6e0
1007fa04:	a3 a4 40 54 10       	mov    ds:0x105440a4,eax
1007fa09:	85 c0                	test   eax,eax
1007fa0b:	74 2a                	je     0x1007fa37
1007fa0d:	68 98 09 15 10       	push   0x10150998
1007fa12:	6a 00                	push   0x0
1007fa14:	6a 3d                	push   0x3d
1007fa16:	6a 00                	push   0x0
1007fa18:	c6 00 00             	mov    BYTE PTR [eax],0x0
1007fa1b:	ff 15 08 a3 13 10    	call   DWORD PTR ds:0x1013a308
1007fa21:	83 c4 10             	add    esp,0x10
1007fa24:	a3 a8 40 54 10       	mov    ds:0x105440a8,eax
1007fa29:	8b e5                	mov    esp,ebp
1007fa2b:	5d                   	pop    ebp
1007fa2c:	c3                   	ret
1007fa2d:	c7 05 a4 40 54 10 00 	mov    DWORD PTR ds:0x105440a4,0x0
1007fa34:	00 00 00 
1007fa37:	8b e5                	mov    esp,ebp
1007fa39:	5d                   	pop    ebp
1007fa3a:	c3                   	ret
