
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10100000 <.text+0xff000>:
10100000:	55                   	push   ebp
10100001:	8b ec                	mov    ebp,esp
10100003:	51                   	push   ecx
10100004:	83 3d c4 c8 22 10 00 	cmp    DWORD PTR ds:0x1022c8c4,0x0
1010000b:	74 64                	je     0x10100071
1010000d:	b9 20 00 00 00       	mov    ecx,0x20
10100012:	39 4d 0c             	cmp    DWORD PTR [ebp+0xc],ecx
10100015:	57                   	push   edi
10100016:	0f 4e 4d 0c          	cmovle ecx,DWORD PTR [ebp+0xc]
1010001a:	33 c0                	xor    eax,eax
1010001c:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1010001f:	85 c9                	test   ecx,ecx
10100021:	7e 08                	jle    0x1010002b
10100023:	88 04 38             	mov    BYTE PTR [eax+edi*1],al
10100026:	40                   	inc    eax
10100027:	3b c1                	cmp    eax,ecx
10100029:	7c f8                	jl     0x10100023
1010002b:	53                   	push   ebx
1010002c:	8d 1c 8d 00 00 00 00 	lea    ebx,[ecx*4+0x0]
10100033:	85 db                	test   ebx,ebx
10100035:	7e 38                	jle    0x1010006f
10100037:	8d 41 ff             	lea    eax,[ecx-0x1]
1010003a:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1010003d:	56                   	push   esi
1010003e:	66 90                	xchg   ax,ax
10100040:	50                   	push   eax
10100041:	6a 00                	push   0x0
10100043:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
10100049:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
1010004c:	8b f0                	mov    esi,eax
1010004e:	6a 00                	push   0x0
10100050:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
10100056:	8a 14 3e             	mov    dl,BYTE PTR [esi+edi*1]
10100059:	83 c4 10             	add    esp,0x10
1010005c:	8d 0c 38             	lea    ecx,[eax+edi*1]
1010005f:	8a 01                	mov    al,BYTE PTR [ecx]
10100061:	88 04 3e             	mov    BYTE PTR [esi+edi*1],al
10100064:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10100067:	88 11                	mov    BYTE PTR [ecx],dl
10100069:	83 eb 01             	sub    ebx,0x1
1010006c:	75 d2                	jne    0x10100040
1010006e:	5e                   	pop    esi
1010006f:	5b                   	pop    ebx
10100070:	5f                   	pop    edi
10100071:	8b e5                	mov    esp,ebp
10100073:	5d                   	pop    ebp
10100074:	c3                   	ret
