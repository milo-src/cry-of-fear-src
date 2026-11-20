
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10119d40 <.text+0x118d40>:
10119d40:	55                   	push   ebp
10119d41:	8b ec                	mov    ebp,esp
10119d43:	56                   	push   esi
10119d44:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10119d47:	85 f6                	test   esi,esi
10119d49:	0f 84 81 00 00 00    	je     0x10119dd0
10119d4f:	8b 06                	mov    eax,DWORD PTR [esi]
10119d51:	8b ce                	mov    ecx,esi
10119d53:	ff 90 d4 00 00 00    	call   DWORD PTR [eax+0xd4]
10119d59:	85 c0                	test   eax,eax
10119d5b:	74 73                	je     0x10119dd0
10119d5d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10119d60:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10119d66:	6a 00                	push   0x0
10119d68:	ff 35 20 67 22 10    	push   DWORD PTR ds:0x10226720
10119d6e:	6a 01                	push   0x1
10119d70:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10119d76:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10119d79:	f3 0f 2c 06          	cvttss2si eax,DWORD PTR [esi]
10119d7d:	50                   	push   eax
10119d7e:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
10119d84:	f3 0f 2c 46 04       	cvttss2si eax,DWORD PTR [esi+0x4]
10119d89:	50                   	push   eax
10119d8a:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
10119d90:	ff 76 08             	push   DWORD PTR [esi+0x8]
10119d93:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
10119d99:	0f b6 46 0c          	movzx  eax,BYTE PTR [esi+0xc]
10119d9d:	50                   	push   eax
10119d9e:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10119da4:	0f b6 46 0d          	movzx  eax,BYTE PTR [esi+0xd]
10119da8:	50                   	push   eax
10119da9:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10119daf:	0f b6 46 0e          	movzx  eax,BYTE PTR [esi+0xe]
10119db3:	50                   	push   eax
10119db4:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10119dba:	0f b6 46 0f          	movzx  eax,BYTE PTR [esi+0xf]
10119dbe:	50                   	push   eax
10119dbf:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10119dc5:	83 c4 2c             	add    esp,0x2c
10119dc8:	5e                   	pop    esi
10119dc9:	5d                   	pop    ebp
10119dca:	ff 25 04 30 22 10    	jmp    DWORD PTR ds:0x10223004
10119dd0:	5e                   	pop    esi
10119dd1:	5d                   	pop    ebp
10119dd2:	c3                   	ret
