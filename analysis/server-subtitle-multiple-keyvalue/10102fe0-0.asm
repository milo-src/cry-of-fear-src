
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10102fe0 <.text+0x101fe0>:
10102fe0:	55                   	push   ebp
10102fe1:	8b ec                	mov    ebp,esp
10102fe3:	56                   	push   esi
10102fe4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10102fe7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10102fea:	85 f6                	test   esi,esi
10102fec:	75 13                	jne    0x10103001
10102fee:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10102ff4:	85 c0                	test   eax,eax
10102ff6:	74 06                	je     0x10102ffe
10102ff8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
10102ffe:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10103001:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10103007:	85 c9                	test   ecx,ecx
10103009:	74 07                	je     0x10103012
1010300b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1010300e:	85 c0                	test   eax,eax
10103010:	75 27                	jne    0x10103039
10103012:	68 e4 01 00 00       	push   0x1e4
10103017:	51                   	push   ecx
10103018:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1010301e:	83 c4 08             	add    esp,0x8
10103021:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10103024:	85 c0                	test   eax,eax
10103026:	74 0c                	je     0x10103034
10103028:	c7 00 34 f6 1d 10    	mov    DWORD PTR [eax],0x101df634
1010302e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10103031:	5e                   	pop    esi
10103032:	5d                   	pop    ebp
10103033:	c3                   	ret
10103034:	33 c0                	xor    eax,eax
10103036:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10103039:	5e                   	pop    esi
1010303a:	5d                   	pop    ebp
1010303b:	c3                   	ret
