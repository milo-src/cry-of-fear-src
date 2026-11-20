
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10047f70 <.text+0x46f70>:
10047f70:	55                   	push   ebp
10047f71:	8b ec                	mov    ebp,esp
10047f73:	56                   	push   esi
10047f74:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10047f77:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10047f7a:	85 f6                	test   esi,esi
10047f7c:	75 13                	jne    0x10047f91
10047f7e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10047f84:	85 c0                	test   eax,eax
10047f86:	74 06                	je     0x10047f8e
10047f88:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
10047f8e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10047f91:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10047f97:	85 c9                	test   ecx,ecx
10047f99:	74 07                	je     0x10047fa2
10047f9b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
10047f9e:	85 c0                	test   eax,eax
10047fa0:	75 27                	jne    0x10047fc9
10047fa2:	68 dc 00 00 00       	push   0xdc
10047fa7:	51                   	push   ecx
10047fa8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
10047fae:	83 c4 08             	add    esp,0x8
10047fb1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10047fb4:	85 c0                	test   eax,eax
10047fb6:	74 0c                	je     0x10047fc4
10047fb8:	c7 00 04 0e 1b 10    	mov    DWORD PTR [eax],0x101b0e04
10047fbe:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10047fc1:	5e                   	pop    esi
10047fc2:	5d                   	pop    ebp
10047fc3:	c3                   	ret
10047fc4:	33 c0                	xor    eax,eax
10047fc6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10047fc9:	5e                   	pop    esi
10047fca:	5d                   	pop    ebp
10047fcb:	c3                   	ret
