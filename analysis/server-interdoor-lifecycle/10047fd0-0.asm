
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10047fd0 <.text+0x46fd0>:
10047fd0:	55                   	push   ebp
10047fd1:	8b ec                	mov    ebp,esp
10047fd3:	56                   	push   esi
10047fd4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10047fd7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10047fda:	85 f6                	test   esi,esi
10047fdc:	75 13                	jne    0x10047ff1
10047fde:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10047fe4:	85 c0                	test   eax,eax
10047fe6:	74 06                	je     0x10047fee
10047fe8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
10047fee:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10047ff1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10047ff7:	85 c9                	test   ecx,ecx
10047ff9:	74 07                	je     0x10048002
10047ffb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
10047ffe:	85 c0                	test   eax,eax
10048000:	75 27                	jne    0x10048029
10048002:	68 dc 00 00 00       	push   0xdc
10048007:	51                   	push   ecx
10048008:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1004800e:	83 c4 08             	add    esp,0x8
10048011:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10048014:	85 c0                	test   eax,eax
10048016:	74 0c                	je     0x10048024
10048018:	c7 00 9c 24 1a 10    	mov    DWORD PTR [eax],0x101a249c
1004801e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10048021:	5e                   	pop    esi
10048022:	5d                   	pop    ebp
10048023:	c3                   	ret
10048024:	33 c0                	xor    eax,eax
10048026:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10048029:	5e                   	pop    esi
1004802a:	5d                   	pop    ebp
1004802b:	c3                   	ret
