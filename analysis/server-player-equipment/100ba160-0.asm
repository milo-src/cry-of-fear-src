
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ba160 <.text+0xb9160>:
100ba160:	55                   	push   ebp
100ba161:	8b ec                	mov    ebp,esp
100ba163:	56                   	push   esi
100ba164:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100ba167:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100ba16a:	85 f6                	test   esi,esi
100ba16c:	75 13                	jne    0x100ba181
100ba16e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
100ba174:	85 c0                	test   eax,eax
100ba176:	74 06                	je     0x100ba17e
100ba178:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
100ba17e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100ba181:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
100ba187:	85 c9                	test   ecx,ecx
100ba189:	74 07                	je     0x100ba192
100ba18b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
100ba18e:	85 c0                	test   eax,eax
100ba190:	75 27                	jne    0x100ba1b9
100ba192:	68 e0 01 00 00       	push   0x1e0
100ba197:	51                   	push   ecx
100ba198:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
100ba19e:	83 c4 08             	add    esp,0x8
100ba1a1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100ba1a4:	85 c0                	test   eax,eax
100ba1a6:	74 0c                	je     0x100ba1b4
100ba1a8:	c7 00 28 45 1d 10    	mov    DWORD PTR [eax],0x101d4528
100ba1ae:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100ba1b1:	5e                   	pop    esi
100ba1b2:	5d                   	pop    ebp
100ba1b3:	c3                   	ret
100ba1b4:	33 c0                	xor    eax,eax
100ba1b6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100ba1b9:	5e                   	pop    esi
100ba1ba:	5d                   	pop    ebp
100ba1bb:	c3                   	ret
