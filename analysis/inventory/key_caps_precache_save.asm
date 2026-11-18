
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004e030 <.text+0x4d030>:
1004e030:	8b 49 14             	mov    ecx,DWORD PTR [ecx+0x14]
1004e033:	85 c9                	test   ecx,ecx
1004e035:	74 0c                	je     0x1004e043
1004e037:	8b 01                	mov    eax,DWORD PTR [ecx]
1004e039:	ff 50 40             	call   DWORD PTR [eax+0x40]
1004e03c:	83 e0 02             	and    eax,0x2
1004e03f:	83 c8 08             	or     eax,0x8
1004e042:	c3                   	ret
1004e043:	b8 02 00 00 00       	mov    eax,0x2
1004e048:	83 c8 08             	or     eax,0x8
1004e04b:	c3                   	ret
1004e04c:	cc                   	int3
1004e04d:	cc                   	int3
1004e04e:	cc                   	int3
1004e04f:	cc                   	int3
1004e050:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1004e053:	8b 88 b8 00 00 00    	mov    ecx,DWORD PTR [eax+0xb8]
1004e059:	85 c9                	test   ecx,ecx
1004e05b:	74 14                	je     0x1004e071
1004e05d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004e062:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004e068:	03 c1                	add    eax,ecx
1004e06a:	50                   	push   eax
1004e06b:	e8 20 89 0c 00       	call   0x10116990
1004e070:	59                   	pop    ecx
1004e071:	c3                   	ret
1004e072:	cc                   	int3
1004e073:	cc                   	int3
1004e074:	cc                   	int3
1004e075:	cc                   	int3
1004e076:	cc                   	int3
1004e077:	cc                   	int3
1004e078:	cc                   	int3
1004e079:	cc                   	int3
1004e07a:	cc                   	int3
1004e07b:	cc                   	int3
1004e07c:	cc                   	int3
1004e07d:	cc                   	int3
1004e07e:	cc                   	int3
1004e07f:	cc                   	int3
1004e080:	55                   	push   ebp
1004e081:	8b ec                	mov    ebp,esp
1004e083:	56                   	push   esi
1004e084:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1004e087:	8b f1                	mov    esi,ecx
1004e089:	e8 d2 09 fc ff       	call   0x1000ea60
1004e08e:	85 c0                	test   eax,eax
1004e090:	75 05                	jne    0x1004e097
1004e092:	5e                   	pop    esi
1004e093:	5d                   	pop    ebp
1004e094:	c2 04 00             	ret    0x4
1004e097:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1004e09a:	6a 01                	push   0x1
1004e09c:	68 10 26 21 10       	push   0x10212610
1004e0a1:	56                   	push   esi
1004e0a2:	68 64 17 1b 10       	push   0x101b1764
1004e0a7:	e8 64 8f 0c 00       	call   0x10117010
1004e0ac:	5e                   	pop    esi
1004e0ad:	5d                   	pop    ebp
1004e0ae:	c2 04 00             	ret    0x4
1004e0b1:	cc                   	int3
1004e0b2:	cc                   	int3
1004e0b3:	cc                   	int3
1004e0b4:	cc                   	int3
1004e0b5:	cc                   	int3
1004e0b6:	cc                   	int3
1004e0b7:	cc                   	int3
1004e0b8:	cc                   	int3
1004e0b9:	cc                   	int3
1004e0ba:	cc                   	int3
1004e0bb:	cc                   	int3
1004e0bc:	cc                   	int3
1004e0bd:	cc                   	int3
1004e0be:	cc                   	int3
1004e0bf:	cc                   	int3
1004e0c0:	55                   	push   ebp
1004e0c1:	8b ec                	mov    ebp,esp
1004e0c3:	56                   	push   esi
1004e0c4:	57                   	push   edi
1004e0c5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1004e0c8:	8b f1                	mov    esi,ecx
1004e0ca:	57                   	push   edi
1004e0cb:	e8 d0 09 fc ff       	call   0x1000eaa0
1004e0d0:	85 c0                	test   eax,eax
1004e0d2:	75 06                	jne    0x1004e0da
1004e0d4:	5f                   	pop    edi
1004e0d5:	5e                   	pop    esi
1004e0d6:	5d                   	pop    ebp
1004e0d7:	c2 04 00             	ret    0x4
1004e0da:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1004e0dd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004e0e2:	6a 01                	push   0x1
1004e0e4:	68 10 26 21 10       	push   0x10212610
1004e0e9:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
1004e0ef:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004e0f5:	56                   	push   esi
1004e0f6:	68 64 17 1b 10       	push   0x101b1764
1004e0fb:	85 d2                	test   edx,edx
1004e0fd:	74 10                	je     0x1004e10f
1004e0ff:	03 c2                	add    eax,edx
1004e101:	8b cf                	mov    ecx,edi
1004e103:	50                   	push   eax
1004e104:	e8 b7 cc 0c 00       	call   0x1011adc0
1004e109:	5f                   	pop    edi
1004e10a:	5e                   	pop    esi
1004e10b:	5d                   	pop    ebp
1004e10c:	c2 04 00             	ret    0x4
1004e10f:	03 01                	add    eax,DWORD PTR [ecx]
1004e111:	8b cf                	mov    ecx,edi
1004e113:	50                   	push   eax
1004e114:	e8 a7 cc 0c 00       	call   0x1011adc0
1004e119:	5f                   	pop    edi
1004e11a:	5e                   	pop    esi
1004e11b:	5d                   	pop    ebp
1004e11c:	c2 04 00             	ret    0x4
1004e11f:	cc                   	int3
