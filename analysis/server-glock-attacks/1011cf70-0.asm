
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011cf70 <.text+0x11bf70>:
1011cf70:	55                   	push   ebp
1011cf71:	8b ec                	mov    ebp,esp
1011cf73:	56                   	push   esi
1011cf74:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1011cf77:	6a 00                	push   0x0
1011cf79:	56                   	push   esi
1011cf7a:	6a 17                	push   0x17
1011cf7c:	6a 04                	push   0x4
1011cf7e:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1011cf84:	6a 6a                	push   0x6a
1011cf86:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1011cf8c:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
1011cf90:	83 c4 10             	add    esp,0x10
1011cf93:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011cf98:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1011cf9e:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
1011cfa3:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011cfa8:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1011cfae:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
1011cfb3:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011cfb8:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1011cfbe:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
1011cfc1:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
1011cfc5:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011cfca:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1011cfd0:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
1011cfd5:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011cfda:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1011cfe0:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
1011cfe5:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011cfea:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1011cff0:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
1011cff5:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011cffa:	ff 15 18 30 22 10    	call   DWORD PTR ds:0x10223018
1011d000:	ff 75 14             	push   DWORD PTR [ebp+0x14]
1011d003:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
1011d009:	ff 75 18             	push   DWORD PTR [ebp+0x18]
1011d00c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1011d012:	6a 19                	push   0x19
1011d014:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1011d01a:	83 c4 10             	add    esp,0x10
1011d01d:	5e                   	pop    esi
1011d01e:	5d                   	pop    ebp
1011d01f:	ff 25 04 30 22 10    	jmp    DWORD PTR ds:0x10223004
