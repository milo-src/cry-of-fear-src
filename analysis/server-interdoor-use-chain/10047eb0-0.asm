
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10047eb0 <.text+0x46eb0>:
10047eb0:	55                   	push   ebp
10047eb1:	8b ec                	mov    ebp,esp
10047eb3:	56                   	push   esi
10047eb4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10047eb7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10047eba:	85 f6                	test   esi,esi
10047ebc:	75 13                	jne    0x10047ed1
10047ebe:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10047ec4:	85 c0                	test   eax,eax
10047ec6:	74 06                	je     0x10047ece
10047ec8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
10047ece:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10047ed1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10047ed7:	85 c9                	test   ecx,ecx
10047ed9:	74 07                	je     0x10047ee2
10047edb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
10047ede:	85 c0                	test   eax,eax
10047ee0:	75 27                	jne    0x10047f09
10047ee2:	68 dc 00 00 00       	push   0xdc
10047ee7:	51                   	push   ecx
10047ee8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
10047eee:	83 c4 08             	add    esp,0x8
10047ef1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10047ef4:	85 c0                	test   eax,eax
10047ef6:	74 0c                	je     0x10047f04
10047ef8:	c7 00 24 0f 1b 10    	mov    DWORD PTR [eax],0x101b0f24
10047efe:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10047f01:	5e                   	pop    esi
10047f02:	5d                   	pop    ebp
10047f03:	c3                   	ret
10047f04:	33 c0                	xor    eax,eax
10047f06:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10047f09:	5e                   	pop    esi
10047f0a:	5d                   	pop    ebp
10047f0b:	c3                   	ret
